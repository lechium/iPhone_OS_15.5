//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISResourceProvider;

__attribute__((visibility("hidden")))
@interface ISTransparentIcon
{
    ISResourceProvider *_resourceProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000fceb
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fce3
- (void).cxx_destruct;	// IMP=0x000000000000fe1b
- (id)makeResourceProvider;	// IMP=0x000000000000fe06
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fdcc
- (id)init;	// IMP=0x000000000000fd40

@end

