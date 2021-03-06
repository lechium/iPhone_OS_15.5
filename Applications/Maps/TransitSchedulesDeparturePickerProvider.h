//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TransitSchedulesDeparturePickerCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface TransitSchedulesDeparturePickerProvider : NSObject
{
    id <TransitSchedulesDeparturePickerCollectionViewCellDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002f0b80
@property(nonatomic) __weak id <TransitSchedulesDeparturePickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)collectionView:(id)arg1 departureCellWithIdentifier:(id)arg2 indexPath:(id)arg3 referenceDate:(id)arg4 dataProvider:(id)arg5;	// IMP=0x00100000002f0a07
- (void)collectionView:(id)arg1 selectedDeparture:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000002f092a
- (id)identifiersForDepartures:(id)arg1;	// IMP=0x00100000002f08c3
- (void)registerCellsForCollectionView:(id)arg1;	// IMP=0x00100000002f087a

@end

