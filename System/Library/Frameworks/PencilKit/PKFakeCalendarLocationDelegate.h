//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionDelegate-Protocol.h>
#import <PencilKit/PKScribbleInteractionElementSource-Protocol.h>

@class NSString, NSUUID, UITableView, UITableViewCell, UIWindow;

@interface PKFakeCalendarLocationDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate>
{
    UITableViewCell *_cell;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    NSUUID *_elementID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000022e552
- (id)_searchBarInView:(id)arg1;	// IMP=0x000000000022e38e
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x000000000022e386
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x000000000022e313
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000022e0c2
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000022dfee
- (id)initWithCell:(id)arg1 window:(id)arg2;	// IMP=0x000000000022de86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

