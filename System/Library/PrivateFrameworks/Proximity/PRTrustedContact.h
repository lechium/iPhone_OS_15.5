//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData;

@interface PRTrustedContact : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_contactKey;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f7e2
- (void).cxx_destruct;	// IMP=0x000000000001f994
@property(readonly) NSData *contactKey; // @synthesize contactKey=_contactKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f8f2
- (id)description;	// IMP=0x000000000001f8c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f89a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f877
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f7ea
- (id)initWithContactKey:(id)arg1;	// IMP=0x000000000001f677
- (id)init;	// IMP=0x000000000001f64c

@end

