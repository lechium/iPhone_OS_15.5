//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SWLoader : NSObject
{
    CDUnknownBlockType _loadBlock;	// 8 = 0x8
}

+ (id)loaderWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006329
- (void).cxx_destruct;	// IMP=0x00000000000063c0
@property(readonly, nonatomic) CDUnknownBlockType loadBlock; // @synthesize loadBlock=_loadBlock;
- (void)load;	// IMP=0x0000000000006381

@end

