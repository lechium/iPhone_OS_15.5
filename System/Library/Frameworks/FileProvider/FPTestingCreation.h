//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderTestingCreation-Protocol.h>

@class NSFileProviderDomainVersion, NSString;
@protocol NSFileProviderItem;

@interface FPTestingCreation <NSFileProviderTestingCreation>
{
    id <NSFileProviderItem> _sourceItem;	// 16 = 0x10
    NSFileProviderDomainVersion *_domainVersion;	// 24 = 0x18
    long long _snapshotVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bd27f
- (void).cxx_destruct;	// IMP=0x00000000000bd2ba
@property(readonly, nonatomic) long long snapshotVersion; // @synthesize snapshotVersion=_snapshotVersion;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, nonatomic) id <NSFileProviderItem> sourceItem; // @synthesize sourceItem=_sourceItem;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bd171
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bd0b3
@property(readonly, nonatomic) unsigned long long targetSide;
- (id)asCreation;	// IMP=0x00000000000bd053
@property(readonly, nonatomic) long long type;
- (id)initWithOperationIdentifier:(id)arg1 sourceItem:(id)arg2 domainVersion:(id)arg3 snapshotVersion:(long long)arg4;	// IMP=0x00000000000bcf8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

