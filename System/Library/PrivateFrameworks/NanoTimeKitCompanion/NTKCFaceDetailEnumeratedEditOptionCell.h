//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell
{
    _Bool _active;	// 24 = 0x18
    NTKEditOption *_editOption;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x0000000000065f66
- (void).cxx_destruct;	// IMP=0x00000000000661ee
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NTKEditOption *editOption; // @synthesize editOption=_editOption;
- (id)initWithEditOption:(id)arg1;	// IMP=0x0000000000065fe8
- (double)rowHeight;	// IMP=0x0000000000065f7f

@end
