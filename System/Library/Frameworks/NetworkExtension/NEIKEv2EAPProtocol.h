//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying>
{
    unsigned long long _method;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008bf2d
@property(retain) NSDictionary *properties; // @synthesize properties=_properties;
@property unsigned long long method; // @synthesize method=_method;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008be56
- (unsigned long long)hash;	// IMP=0x000000000008be44
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008bda0
- (id)description;	// IMP=0x000000000008bcbc
- (id)initWithMethod:(unsigned long long)arg1;	// IMP=0x000000000008bc1e

@end

