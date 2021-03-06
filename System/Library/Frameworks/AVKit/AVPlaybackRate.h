//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AVPlaybackRate : NSObject
{
    id _symbolImage;	// 8 = 0x8
    id __uiImage;	// 16 = 0x10
    double _rate;	// 24 = 0x18
    NSString *_localizedName;	// 32 = 0x20
    NSString *_compactLocalizedName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000053ab9
@property(readonly, copy, nonatomic) NSString *compactLocalizedName; // @synthesize compactLocalizedName=_compactLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(retain, nonatomic, setter=_setUIImage:) UIImage *_uiImage; // @synthesize _uiImage=__uiImage;
- (id)description;	// IMP=0x00000000000539fe
- (id)debugDescription;	// IMP=0x00000000000539ec
- (id)initWithRate:(double)arg1 localizedName:(id)arg2 compactLocalizedName:(id)arg3;	// IMP=0x0000000000053924
@property(readonly, copy, nonatomic) UIImage *symbolImage;
- (id)initWithRate:(double)arg1 localizedName:(id)arg2 compactLocalizedName:(id)arg3 symbolImage:(id)arg4;	// IMP=0x0000000000053af7
- (void)_loadUIImageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009d335

@end

