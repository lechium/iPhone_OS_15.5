//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLEQPreset : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    int _builtInPresetType;	// 24 = 0x18
}

+ (id)eqPresetForBuiltInPresetType:(int)arg1;	// IMP=0x0000000000006933
+ (id)eqPresetForName:(id)arg1;	// IMP=0x00000000000067c8
- (void).cxx_destruct;	// IMP=0x0000000000005e83
- (int)typeForAVController;	// IMP=0x0000000000005e6f
- (int)builtInPresetType;	// IMP=0x0000000000005e66
- (id)localizedName;	// IMP=0x0000000000005e58
- (id)name;	// IMP=0x0000000000005e4a
- (id)initWithBuiltInPresetType:(int)arg1;	// IMP=0x0000000000005dbb

@end
