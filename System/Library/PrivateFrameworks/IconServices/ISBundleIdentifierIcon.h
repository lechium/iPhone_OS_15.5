//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ISBundleIdentifierIcon
{
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a938
- (void).cxx_destruct;	// IMP=0x000000000000b45d
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x000000000000b386
- (double)_aspectRatio;	// IMP=0x000000000000b378
- (id)makeSymbolResourceProvider;	// IMP=0x000000000000b364
- (id)makeResourceProvider;	// IMP=0x000000000000b34d
- (id)_makeResourceProviderAllowIconResourceFallback:(_Bool)arg1;	// IMP=0x000000000000af06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ae89
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000adee
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000000a940

@end
