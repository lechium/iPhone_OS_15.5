//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIOUtils : NSObject
{
}

+ (struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg1;	// IMP=0x00000000002d29a2
+ (struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg1;	// IMP=0x00000000002d295c
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d25a7

@end

