//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/UIActivityItemSource-Protocol.h>

@class ICNote, NSString;

@interface ICNoteHTMLActivityItemSource : NSObject <UIActivityItemSource>
{
    ICNote *_note;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002fd08
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x000000000002faff
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x000000000002fa4d
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x000000000002fa34
- (id)initWithNote:(id)arg1;	// IMP=0x000000000002f9cc
- (id)init;	// IMP=0x000000000002f9be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

