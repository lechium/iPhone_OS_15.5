//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSParsecABGroupStoreClient-Protocol.h>

@class NSString, NSTimer;
@protocol WBSParsecABGroupStore;

@interface WBSParsecABGroupManager : NSObject <WBSParsecABGroupStoreClient>
{
    NSTimer *_shuffleTimer;	// 8 = 0x8
    id <WBSParsecABGroupStore> _groupStore;	// 16 = 0x10
    unsigned long long _groupIdentifier;	// 24 = 0x18
}

+ (unsigned long long)_weightedRandomIdentifier;	// IMP=0x0000000000086fad
+ (unsigned long long)ephemeralGroupIdentifier;	// IMP=0x0000000000086c3d
- (void).cxx_destruct;	// IMP=0x00000000000870ae
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) id <WBSParsecABGroupStore> groupStore; // @synthesize groupStore=_groupStore;
- (void)abGroupStoreDidUpdateGroupIdentifier:(id)arg1;	// IMP=0x0000000000087087
- (void)_postDidChangeGroupIdentifierNotification;	// IMP=0x0000000000087019
- (void)_generateAndSaveNewGroupIdentifier;	// IMP=0x0000000000086eb3
- (void)_scheduleShuffleTimer;	// IMP=0x0000000000086c61
- (void)shuffleGroup;	// IMP=0x0000000000086c4f
- (id)initWithGroupStore:(id)arg1;	// IMP=0x0000000000086a49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
