//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID, NSUserActivity, SBSSystemNotesSnapshotManifest;

@interface SBSSystemNotesPresentationConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying>
{
    NSData *_userActivityData;	// 8 = 0x8
    NSString *_sceneBundleIdentifier;	// 16 = 0x10
    NSUserActivity *_userActivity;	// 24 = 0x18
    long long _preferredPresentationMode;	// 32 = 0x20
    SBSSystemNotesSnapshotManifest *_snapshotManifest;	// 40 = 0x28
    NSUUID *_identifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d38b
- (void).cxx_destruct;	// IMP=0x000000000002d7df
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) SBSSystemNotesSnapshotManifest *snapshotManifest; // @synthesize snapshotManifest=_snapshotManifest;
@property(readonly, nonatomic) long long preferredPresentationMode; // @synthesize preferredPresentationMode=_preferredPresentationMode;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) NSString *sceneBundleIdentifier; // @synthesize sceneBundleIdentifier=_sceneBundleIdentifier;
- (void)setPreferredPresentationMode:(long long)arg1;	// IMP=0x000000000002d6fa
- (void)prepareForXPCCall:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d5d8
@property(readonly, nonatomic) NSData *userActivityData;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002d569
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002d519
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002d446
- (id)succinctDescription;	// IMP=0x000000000002d3f6
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d393
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d269
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d0ca
- (_Bool)isEqualToSystemNotesPresentationConfiguration:(id)arg1;	// IMP=0x000000000002d0b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d04f
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2 preferredPresentationMode:(long long)arg3 identifier:(id)arg4;	// IMP=0x000000000002cef6
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2 preferredPresentationMode:(long long)arg3;	// IMP=0x000000000002ce55
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2;	// IMP=0x000000000002ce3d
- (id)initWithSceneBundleIdentifier:(id)arg1;	// IMP=0x000000000002ce29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
