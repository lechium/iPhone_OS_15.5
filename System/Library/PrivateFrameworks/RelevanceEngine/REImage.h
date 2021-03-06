//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@interface REImage : NSObject <NSCopying, NSCoding>
{
}

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;	// IMP=0x000000000007d829
+ (id)imageWithData:(id)arg1 scale:(double)arg2;	// IMP=0x000000000007d7ca
+ (id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2;	// IMP=0x000000000007d76b
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000007d6fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010734f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000107304
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001072d7

@end

