//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol VenueCardFactoryDelegate, VenueChangeNotifier;

__attribute__((visibility("hidden")))
@interface VenueCardFactory : NSObject
{
    id <VenueChangeNotifier> _changeNotifier;	// 8 = 0x8
    NSMapTable *_cardItemToViewControllerMapping;	// 16 = 0x10
    id <VenueCardFactoryDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000099fb7d
- (void);	// IMP=0x001000000099fb6c
@property(nonatomic) __weak id <VenueCardFactoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cardStack:(id)arg1 didChangeStack:(id)arg2;	// IMP=0x001000000099f8bb
- (id)existingViewControllerForCardItem:(id)arg1;	// IMP=0x001000000099f594
- (id)viewControllerForCardItem:(id)arg1;	// IMP=0x001000000099f2f6
- (id)init;	// IMP=0x001000000099f2e8
- (id)initWithChangeNotifier:(id)arg1;	// IMP=0x001000000099f25a

@end

