//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface RAPAnnotation : NSObject
{
    MKMapItem *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000855aa5
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000008559c6
- (id)init;	// IMP=0x001000000085599c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end
