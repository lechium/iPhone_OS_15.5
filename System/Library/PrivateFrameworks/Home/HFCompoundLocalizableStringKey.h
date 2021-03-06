//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface HFCompoundLocalizableStringKey
{
    NSString *_format;	// 40 = 0x28
    NSMutableArray *_localizableStrings;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d2020
@property(readonly, nonatomic) NSMutableArray *localizableStrings; // @synthesize localizableStrings=_localizableStrings;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (id)localizedStringWithArgumentBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d1ea1
- (id)initWithFormat:(id)arg1 localizableStrings:(id)arg2;	// IMP=0x00000000001d1d3b

@end

