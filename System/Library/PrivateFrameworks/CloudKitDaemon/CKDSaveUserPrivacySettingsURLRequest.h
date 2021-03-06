//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest
{
    NSString *_bundleID;	// 8 = 0x8
    long long _discoverableTrinary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e7a9c
@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002e7a50
- (id)generateRequestOperations;	// IMP=0x00000000002e785f
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000002e7857
- (id)requestOperationClasses;	// IMP=0x00000000002e77eb
- (long long)databaseScope;	// IMP=0x00000000002e77e0
- (void)setDiscoverable:(_Bool)arg1;	// IMP=0x00000000002e77b7
- (id)initWithOperation:(id)arg1;	// IMP=0x00000000002e7774

@end

