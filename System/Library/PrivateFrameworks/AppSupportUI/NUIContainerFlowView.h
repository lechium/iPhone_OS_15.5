//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/_NUIFlowArrangementContainer-Protocol.h>

@class NSString;

@interface NUIContainerFlowView <_NUIFlowArrangementContainer>
{
    struct _NUIFlowArrangement _arrangement;	// 16 = 0x10
    CDStruct_e0b918f9 _flowFlags;	// 152 = 0x98
}

+ (id)containerFlowViewWithArrangedSubviews:(id)arg1;	// IMP=0x000000000001def6
- (id).cxx_construct;	// IMP=0x000000000001ef8f
- (void).cxx_destruct;	// IMP=0x000000000001ef4d
- (id)debugDictionary;	// IMP=0x000000000001ed2f
- (id)arrangedDebugDescription;	// IMP=0x000000000001e9b7
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x000000000001e95c
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000001e91b
- (_Bool)setNeedsInvalidation:(long long)arg1;	// IMP=0x000000000001e8c5
- (void)populateFlowArrangementCells:(void *)arg1;	// IMP=0x000000000001e5c4
- (id)calculateViewForLastBaselineLayout;	// IMP=0x000000000001e43b
- (id)calculateViewForFirstBaselineLayout;	// IMP=0x000000000001e2c0
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x000000000001e27e
- (void)setBaselineRelativeArrangement:(_Bool)arg1;	// IMP=0x000000000001e232
@property(nonatomic) double rowSpacing;
@property(nonatomic) double columnSpacing;
@property(readonly, nonatomic) long long verticalDistribution;
@property(readonly, nonatomic) long long horizontalDistribution;
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
@property(nonatomic) long long numberOfColumns;
- (void)dealloc;	// IMP=0x000000000001dfb4
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x000000000001df75
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001df25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

