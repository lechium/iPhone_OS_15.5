//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKCFaceDetailActionCell;
@protocol NTKCFaceDetailActionSectionDelegate;

@interface NTKCFaceDetailActionSectionController
{
    id <NTKCFaceDetailActionSectionDelegate> _delegate;	// 8 = 0x8
    NTKCFaceDetailActionCell *_selectCell;	// 16 = 0x10
    NTKCFaceDetailActionCell *_deleteCell;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d0799
@property(retain, nonatomic) NTKCFaceDetailActionCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property(retain, nonatomic) NTKCFaceDetailActionCell *selectCell; // @synthesize selectCell=_selectCell;
@property(nonatomic) __weak id <NTKCFaceDetailActionSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_actionForRow:(long long)arg1;	// IMP=0x00000000000d06fb
- (id)_spacerCell;	// IMP=0x00000000000d0676
- (void)didSelectRow:(long long)arg1;	// IMP=0x00000000000d05fb
- (_Bool)_canSelectRow:(long long)arg1;	// IMP=0x00000000000d05ea
- (id)cellForRow:(long long)arg1;	// IMP=0x00000000000d05a0
- (double)heightForRow:(long long)arg1;	// IMP=0x00000000000d0548
- (long long)numberOfRows;	// IMP=0x00000000000d053d
- (void)_commonInit;	// IMP=0x00000000000d04a4

@end
