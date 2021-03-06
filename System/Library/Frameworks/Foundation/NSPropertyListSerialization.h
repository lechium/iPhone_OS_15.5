//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSPropertyListSerialization : NSObject
{
    void *reserved[6];	// 8 = 0x8
}

+ (id)propertyListWithStream:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;	// IMP=0x0000000000109460
+ (long long)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(out id *)arg5;	// IMP=0x0000000000109394
+ (id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;	// IMP=0x0000000000109314
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x00000000001092c9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001091ff
+ (id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned long long)arg2 format:(unsigned long long *)arg3 errorDescription:(out id *)arg4;	// IMP=0x00000000001091b6
+ (id)dataFromPropertyList:(id)arg1 format:(unsigned long long)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000109135
+ (_Bool)propertyList:(id)arg1 isValidForFormat:(unsigned long long)arg2;	// IMP=0x000000000010911f
- (id)init;	// IMP=0x000000000010925b

@end

