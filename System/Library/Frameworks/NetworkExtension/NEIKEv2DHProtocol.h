//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2DHProtocol : NSObject <NSCopying>
{
    unsigned long long _group;	// 8 = 0x8
}

@property unsigned long long group; // @synthesize group=_group;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008cf22
- (unsigned long long)hash;	// IMP=0x000000000008cf10
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008ce6c
- (id)description;	// IMP=0x000000000008ccf5
- (id)initWithGroup:(unsigned long long)arg1;	// IMP=0x000000000008cc57

@end
