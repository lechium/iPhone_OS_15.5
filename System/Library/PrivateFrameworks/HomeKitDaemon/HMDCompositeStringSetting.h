//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCompositeSettingsStringValueProviding-Protocol.h>

@class NSString;

@interface HMDCompositeStringSetting <HMDCompositeSettingsStringValueProviding>
{
    NSString *_stringValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000029e279
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)attributeDescriptions;	// IMP=0x000000000029e13c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029e086
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x000000000029dfad
- (id)initWithValue:(id)arg1 readVersion:(id)arg2 writeVersion:(id)arg3;	// IMP=0x000000000029df1f

@end

