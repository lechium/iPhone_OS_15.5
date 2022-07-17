//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/PKDrawingPaletteInputAssistantViewStateObserver-Protocol.h>

@class NSString, PKDrawingPaletteInputAssistantView;

@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver>
{
    PKDrawingPaletteInputAssistantView *_inputAssistantView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000147e9a
@property(retain, nonatomic) PKDrawingPaletteInputAssistantView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
- (void)paletteInputAssistantViewDidChangeViewState:(id)arg1;	// IMP=0x0000000000147e77
- (struct CGSize)_preferredContentSize;	// IMP=0x0000000000147d99
- (void)_updateUI;	// IMP=0x0000000000147815
- (void)viewDidLoad;	// IMP=0x000000000014774e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
