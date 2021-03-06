//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface HUCheckmarkCell
{
    _Bool _checked;	// 8 = 0x8
    UIImage *_checkedImage;	// 16 = 0x10
    UIImage *_uncheckedImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c9b62
@property(retain, nonatomic) UIImage *uncheckedImage; // @synthesize uncheckedImage=_uncheckedImage;
@property(retain, nonatomic) UIImage *checkedImage; // @synthesize checkedImage=_checkedImage;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (id)description;	// IMP=0x00000000002c9a59
- (void)prepareForReuse;	// IMP=0x00000000002c991a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002c98cc

@end

