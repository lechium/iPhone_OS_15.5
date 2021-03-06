//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFHomeAccessoryInfoMutating-Protocol.h>

@class AFHomeAccessoryInfo, NSString, NSUUID;

@interface _AFHomeAccessoryInfoMutation : NSObject <AFHomeAccessoryInfoMutating>
{
    AFHomeAccessoryInfo *_baseModel;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSUUID *_loggingUniqueIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSString *_roomName;	// 48 = 0x30
    NSString *_assistantIdentifier;	// 56 = 0x38
    _Bool _isSpeaker;	// 64 = 0x40
    _Bool _hasActiveThirdPartyMusicSubscription;	// 65 = 0x41
    NSString *_manufacturer;	// 72 = 0x48
    NSString *_categoryType;	// 80 = 0x50
    long long _schemaCategoryType;	// 88 = 0x58
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUniqueIdentifier:1;
        unsigned int hasLoggingUniqueIdentifier:1;
        unsigned int hasName:1;
        unsigned int hasModel:1;
        unsigned int hasRoomName:1;
        unsigned int hasAssistantIdentifier:1;
        unsigned int hasIsSpeaker:1;
        unsigned int hasHasActiveThirdPartyMusicSubscription:1;
        unsigned int hasManufacturer:1;
        unsigned int hasCategoryType:1;
        unsigned int hasSchemaCategoryType:1;
    } _mutationFlags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000009aa48
- (id)generate;	// IMP=0x000000000009a6c7
- (void)setSchemaCategoryType:(long long)arg1;	// IMP=0x000000000009a6b7
- (void)setCategoryType:(id)arg1;	// IMP=0x000000000009a695
- (void)setManufacturer:(id)arg1;	// IMP=0x000000000009a673
- (void)setHasActiveThirdPartyMusicSubscription:(_Bool)arg1;	// IMP=0x000000000009a664
- (void)setIsSpeaker:(_Bool)arg1;	// IMP=0x000000000009a657
- (void)setAssistantIdentifier:(id)arg1;	// IMP=0x000000000009a637
- (void)setRoomName:(id)arg1;	// IMP=0x000000000009a617
- (void)setModel:(id)arg1;	// IMP=0x000000000009a5f7
- (void)setName:(id)arg1;	// IMP=0x000000000009a5d7
- (void)setLoggingUniqueIdentifier:(id)arg1;	// IMP=0x000000000009a5b7
- (void)setUniqueIdentifier:(id)arg1;	// IMP=0x000000000009a597
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000009a52c
- (id)init;	// IMP=0x000000000009a518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

