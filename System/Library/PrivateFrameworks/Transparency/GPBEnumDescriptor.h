//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPBEnumDescriptor : NSObject
{
    NSString *name_;	// 8 = 0x8
    const char *valueNames_;	// 16 = 0x10
    const int *values_;	// 24 = 0x18
    CDUnknownFunctionPointerType enumVerifier_;	// 32 = 0x20
    const char *extraTextFormatInfo_;	// 40 = 0x28
    unsigned int *nameOffsets_;	// 48 = 0x30
    unsigned int valueCount_;	// 56 = 0x38
}

+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5 extraTextFormatInfo:(const char *)arg6;	// IMP=0x0000000000034e75
+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;	// IMP=0x0000000000034e35
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumVerifier; // @synthesize enumVerifier=enumVerifier_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=name_;
- (id)getEnumTextFormatNameForIndex:(unsigned int)arg1;	// IMP=0x000000000003526d
- (id)getEnumNameForIndex:(unsigned int)arg1;	// IMP=0x0000000000035201
@property(readonly, nonatomic) unsigned int enumNameCount;
- (id)textFormatNameForValue:(int)arg1;	// IMP=0x00000000000351c5
- (_Bool)getValue:(int *)arg1 forEnumTextFormatName:(id)arg2;	// IMP=0x000000000003511a
- (_Bool)getValue:(int *)arg1 forEnumName:(id)arg2;	// IMP=0x0000000000034ffd
- (id)enumNameForValue:(int)arg1;	// IMP=0x0000000000034fca
- (void)calcValueNameOffsets;	// IMP=0x0000000000034f68
- (void)dealloc;	// IMP=0x0000000000034f1f
- (id)initWithName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;	// IMP=0x0000000000034e9f

@end
