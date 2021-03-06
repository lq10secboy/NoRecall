//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageDataExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class MessageData, NSString;

@interface CExtendInfoOfVoip : NSObject <IMessageDataExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVoipRecvTime;
    int m_iFromAnswer;
    unsigned int m_uiVoipStatus;
    unsigned int m_uiVoipInviteType;
    int m_iVoipRoomid;
    long long m_i64VoipKey;
    unsigned int m_wordingType;
    unsigned int m_duration;
    MessageData *m_refMessageData;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) unsigned int m_duration; // @synthesize m_duration;
@property(nonatomic) unsigned int m_wordingType; // @synthesize m_wordingType;
@property(nonatomic) MessageData *m_refMessageData; // @synthesize m_refMessageData;
@property(nonatomic) unsigned int m_uiVoipStatus; // @synthesize m_uiVoipStatus;
@property(nonatomic) int m_iFromAnswer; // @synthesize m_iFromAnswer;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @synthesize m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @synthesize m_uiVoipInviteType;
@property(nonatomic) int m_iVoipRoomid; // @synthesize m_iVoipRoomid;
@property(nonatomic) long long m_i64VoipKey; // @synthesize m_i64VoipKey;
- (void)UpdateContent:(id)arg1;
- (void)parseMsgFieldFromXML;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

