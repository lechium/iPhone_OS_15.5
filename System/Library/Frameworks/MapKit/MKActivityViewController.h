//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityViewController.h>

#import <MapKit/UIActivityViewControllerAirDropDelegate-Protocol.h>

@class NSString;
@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>
{
    id <MKActivityViewControllerDelegate> _activityControllerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000083320
@property(nonatomic) __weak id <MKActivityViewControllerDelegate> activityControllerDelegate; // @synthesize activityControllerDelegate=_activityControllerDelegate;
- (CDUnknownBlockType)_activityHandler;	// IMP=0x0000000000083221
- (CDUnknownBlockType)_completionHandler;	// IMP=0x000000000008314f
- (id)initWithActivityItems:(id)arg1;	// IMP=0x0000000000083070
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;	// IMP=0x0000000000082be1
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;	// IMP=0x00000000000828ff
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;	// IMP=0x00000000000828ea
- (id)initWithShareItem:(id)arg1;	// IMP=0x0000000000082753

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

