//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLSizeJSExports-Protocol.h>

@interface TMLSize : NSObject <TMLSizeJSExports, NSCopying>
{
    struct CGSize _size;	// 8 = 0x8
}

+ (void)initializeJSContext:(id)arg1;	// IMP=0x000000000001024e
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;	// IMP=0x00000000000105e6
- (id)max:(double)arg1:(double)arg2;	// IMP=0x0000000000010591
- (id)min:(double)arg1:(double)arg2;	// IMP=0x000000000001053c
- (id)asRect;	// IMP=0x00000000000104e6
- (id)scale:(double)arg1:(double)arg2;	// IMP=0x0000000000010491
- (id)extend:(double)arg1:(double)arg2;	// IMP=0x000000000001043c
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (id)CGSizeValue;	// IMP=0x0000000000010228
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000101d9
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000010187

@end
