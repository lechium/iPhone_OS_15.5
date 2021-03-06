//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPTransitLinesAnnotation : NSObject
{
    NSString *_title;	// 8 = 0x8
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007c5337
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2;	// IMP=0x00100000007c528c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

