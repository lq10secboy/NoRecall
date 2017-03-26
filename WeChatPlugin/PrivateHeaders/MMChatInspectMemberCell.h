//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMAvatarImageView, MMView, NSString, NSTextField, WCContactData;

@interface MMChatInspectMemberCell : JNWCollectionViewCell
{
    WCContactData *_contact;
    MMAvatarImageView *_avatarView;
    id _target;
    SEL _action;
    NSTextField *_nameLabel;
    MMView *_button;
}

@property(retain, nonatomic) MMView *button; // @synthesize button=_button;
@property(retain, nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *displayedName;
@property(nonatomic) BOOL highlighted;
- (id)reuseIdentifier;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
