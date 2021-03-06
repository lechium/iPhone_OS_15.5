//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IPASerializationManager : NSObject
{
}

+ (id)debug_deserializeEnvelopeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023078
+ (BOOL)debug_adjustmentTypeFromEnvelopeDictionary:(id)arg1;	// IMP=0x0000000000022fd5
+ (id)debug_serializeEnvelope:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022e63
+ (id)deserialize:(id)arg1 originator:(id)arg2 format:(id)arg3 formatVersion:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000022a6b
+ (id)serialize:(id)arg1 format:(id)arg2 formatVersion:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000022835
+ (id)serialize:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002275d
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 format:(id *)arg2 formatVersion:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000225b1
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022597
+ (id)formatForAdjustmentStack:(id)arg1;	// IMP=0x0000000000022445
+ (BOOL)adjustmentTypeForFormat:(id)arg1 formatVersion:(id)arg2;	// IMP=0x00000000000221a2
+ (id)_serializerForFormat:(id)arg1 formatVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002201c
+ (id)serializerMap;	// IMP=0x000000000002200b
+ (void)initialize;	// IMP=0x0000000000021cac

@end

