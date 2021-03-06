//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSString;
@protocol NUIArrangementContainer, NUIGridArrangementDataSource;

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer>
{
    struct _NUIGridArrangement _arrangement;	// 8 = 0x8
    id <NUIArrangementContainer> _container;	// 120 = 0x78
    id <NUIGridArrangementDataSource> _dataSource;	// 128 = 0x80
    double _scale;	// 136 = 0x88
    struct {
        unsigned int delegateWidth:1;
        unsigned int delegateHeight:1;
        unsigned int containerDirection:1;
    } _flags;	// 144 = 0x90
    struct CGRect _bounds;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x000000000002245b
- (void).cxx_destruct;	// IMP=0x00000000000223fd
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;	// IMP=0x0000000000021f3b
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;	// IMP=0x0000000000021eee
- (void)populateGridArrangementDimension:(void *)arg1 withCells:(const void *)arg2 axis:(long long)arg3;	// IMP=0x0000000000021d70
- (void)populateGridArrangementCells:(void *)arg1;	// IMP=0x0000000000021bf9
- (struct CGRect)frameForColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3;	// IMP=0x0000000000021bb8
- (struct CGRect)unionFrameForItemsInColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3;	// IMP=0x0000000000021b77
- (void)positionItemsInColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021aea
- (void)positionItemsInBounds:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021a85
- (struct CGSize)layoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00000000000219a4
- (void)reloadData;	// IMP=0x0000000000021979
@property(nonatomic) long long verticalDistribution;
@property(nonatomic) long long horizontalDistribution;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property(readonly, nonatomic) __weak id <NUIGridArrangementDataSource> dataSource;
@property(readonly, nonatomic) __weak id <NUIArrangementContainer> container;
- (void)dealloc;	// IMP=0x00000000000218c5
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000000216ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

