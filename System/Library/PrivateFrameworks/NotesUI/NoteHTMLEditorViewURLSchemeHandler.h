//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/WKURLSchemeHandler-Protocol.h>

@class NSString, NoteHTMLEditorView;

@interface NoteHTMLEditorViewURLSchemeHandler : NSObject <WKURLSchemeHandler>
{
    NoteHTMLEditorView *_noteHTMLEditorView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001084bf
@property(nonatomic) __weak NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x0000000000108426
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;	// IMP=0x00000000001083b4
- (id)initWithNoteHMLEditorView:(id)arg1;	// IMP=0x0000000000108350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

