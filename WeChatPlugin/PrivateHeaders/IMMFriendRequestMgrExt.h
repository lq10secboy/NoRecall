//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMFriendRequestMgr;

@protocol IMMFriendRequestMgrExt <NSObject>

@optional
- (void)friendRequestMgrDidDeleteFriendRequestMsg:(MMFriendRequestMgr *)arg1 withIndex:(unsigned long long)arg2;
- (void)friendRequestMgrDidReorderFriendRequestMsg:(MMFriendRequestMgr *)arg1;
- (void)friendRequestMgrDidAddFriendRequestMsg:(MMFriendRequestMgr *)arg1;
- (void)friendRequestMgrDidChangeFriendRequestMsg:(MMFriendRequestMgr *)arg1;
- (void)friendRequestMgr:(MMFriendRequestMgr *)arg1 didChangeFriendRequestUnreadCount:(unsigned long long)arg2;
@end
