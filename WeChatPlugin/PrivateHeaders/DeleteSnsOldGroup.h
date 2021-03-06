//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface DeleteSnsOldGroup : PBGeneratedMessage
{
    unsigned int hasGroupCount:1;
    int groupIdsMemoizedSerializedSize;
    unsigned int groupCount;
    NSMutableArray *mutableGroupIdsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableGroupIdsList; // @synthesize mutableGroupIdsList;
@property(nonatomic, setter=SetGroupCount:) unsigned int groupCount; // @synthesize groupCount;
@property(readonly, nonatomic) BOOL hasGroupCount; // @synthesize hasGroupCount;
- (void).cxx_destruct;
- (void)addGroupIdsFromArray:(id)arg1;
- (void)addGroupIds:(unsigned long long)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *groupIds; // @dynamic groupIds;
- (id)groupIdsList;
- (id)init;

@end

