//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSSecureCoding-Protocol.h>

@interface LSVPNPluginProxy <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001271bd
+ (id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x0000000000127165
+ (id)VPNPluginProxyForIdentifier:(id)arg1;	// IMP=0x00000000001270cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001271f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001271c5
- (id)_initWithBundleIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x000000000012702a

@end
