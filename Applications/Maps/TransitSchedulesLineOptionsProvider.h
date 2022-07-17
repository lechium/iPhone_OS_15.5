//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol TransitSchedulesLineOptionsProviderDelegate;

__attribute__((visibility("hidden")))
@interface TransitSchedulesLineOptionsProvider : NSObject
{
    id <TransitSchedulesLineOptionsProviderDelegate> _delegate;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x002000000040353a
- (void).cxx_destruct;	// IMP=0x0020000000403d08
@property(nonatomic) __weak id <TransitSchedulesLineOptionsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selectedCellAtIndexPath:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000403cdb
- (_Bool)allowsCellSelection;	// IMP=0x0010000000403cd3
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x001000000040354b
@property(readonly, nonatomic) NSArray *identifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
