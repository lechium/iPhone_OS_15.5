//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryDiagnosticsMetadata, NSString, NSURL;

@interface HFAccessoryDiagnosticItem
{
    HMAccessoryDiagnosticsMetadata *_metadata;	// 8 = 0x8
    NSString *_filename;	// 16 = 0x10
    NSString *_manufacturer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001efd3b
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) HMAccessoryDiagnosticsMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *fileURL;
- (_Bool)isEligibleForUpload;	// IMP=0x00000000001efbba
@property(readonly, nonatomic) NSString *path;
- (long long)uploadType;	// IMP=0x00000000001efafc
@property(readonly, nonatomic) long long consentVersion;
@property(readonly, nonatomic) NSURL *privacyPolicyURL;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000001ef928
- (id)initWithLogMetadata:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000001ef801

@end
