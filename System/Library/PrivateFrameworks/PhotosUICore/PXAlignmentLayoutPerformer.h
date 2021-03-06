//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXAlignmentLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *_children;	// 8 = 0x8
    long long _xAlignment;	// 16 = 0x10
    long long _yAlignment;	// 24 = 0x18
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000486e07
- (void).cxx_destruct;	// IMP=0x000000000048740f
@property(nonatomic) long long yAlignment; // @synthesize yAlignment=_yAlignment;
@property(nonatomic) long long xAlignment; // @synthesize xAlignment=_xAlignment;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (void)preprareForReuse;	// IMP=0x0000000000487374
- (struct CGSize)performLayout;	// IMP=0x0000000000486e62

// Remaining properties
@property(nonatomic) CDStruct_392cfed4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end

