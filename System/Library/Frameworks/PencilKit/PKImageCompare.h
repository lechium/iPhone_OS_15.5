//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKImageCompare : NSObject
{
}

+ (id)stringFromSize:(struct CGSize)arg1;	// IMP=0x0000000000265ecf
+ (_Bool)saveImage:(struct CGImage *)arg1 toPath:(id)arg2;	// IMP=0x0000000000265c8a
+ (CDStruct_c5e6d23b)compareImage:(struct CGImage *)arg1 toMasterImage:(struct CGImage *)arg2 filename:(id)arg3 differenceImageOutputPath:(id)arg4 diffWhite:(_Bool)arg5 stdDevThreshhold:(double)arg6;	// IMP=0x000000000026583c
+ (id)filterImage:(struct CGImage *)arg1;	// IMP=0x00000000002657d7

@end

