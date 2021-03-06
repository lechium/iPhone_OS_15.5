//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICAttachmentInsertionController, ICHashtagsNode, ICNote, ICTableColumnTextView, NSMutableDictionary, NSMutableSet, UITextView;
@protocol ICHashtagAnalyticsDelegate, ICHashtagKeyboardDelegate;

@interface ICHashtagController : NSObject
{
    _Bool _isUpdatingKeyboard;	// 8 = 0x8
    id <ICHashtagKeyboardDelegate> _hashtagKeyboardDelegate;	// 16 = 0x10
    id <ICHashtagKeyboardDelegate> _hashtagTableKeyboardDelegate;	// 24 = 0x18
    ICAttachmentInsertionController *_attachmentInsertionController;	// 32 = 0x20
    ICNote *_note;	// 40 = 0x28
    ICTableColumnTextView *_tableTextView;	// 48 = 0x30
    UITextView *_textView;	// 56 = 0x38
    id <ICHashtagAnalyticsDelegate> _analyticsDelegate;	// 64 = 0x40
    NSMutableDictionary *_hashtagSuggestionsDictionary;	// 72 = 0x48
    NSMutableSet *_hashtagsNames;	// 80 = 0x50
    ICHashtagsNode *_hashtagsTree;	// 88 = 0x58
    unsigned long long _maxNameLength;	// 96 = 0x60
    struct _NSRange _editedRange;	// 104 = 0x68
}

+ (_Bool)shouldAutoConvertToTag;	// IMP=0x000000000000df6f
+ (_Bool)isValidPostfixCharacter:(unsigned short)arg1;	// IMP=0x000000000000ded4
+ (_Bool)range:(struct _NSRange)arg1 hasValidPostfixCharacterForString:(id)arg2;	// IMP=0x000000000000de59
+ (_Bool)isValidPrefixCharacter:(unsigned short)arg1 languageHasSpaces:(_Bool)arg2;	// IMP=0x000000000000ddb5
+ (_Bool)range:(struct _NSRange)arg1 hasValidPrefixCharacterForString:(id)arg2 languageHasSpaces:(_Bool)arg3;	// IMP=0x000000000000dd18
+ (_Bool)range:(struct _NSRange)arg1 isPrefixedWithHashtagForString:(id)arg2;	// IMP=0x000000000000dcb7
+ (_Bool)isBeginningHashtagAtSelectionRange:(struct _NSRange)arg1 inString:(id)arg2 languageHasSpaces:(_Bool)arg3;	// IMP=0x000000000000db3d
+ (struct _NSRange)range:(struct _NSRange)arg1 appendingSubstringRange:(struct _NSRange)arg2;	// IMP=0x000000000000db1c
+ (struct _NSRange)rangeOfLastCharacterInRange:(struct _NSRange)arg1;	// IMP=0x000000000000daf7
- (void).cxx_destruct;	// IMP=0x000000000000e1a5
@property(nonatomic) unsigned long long maxNameLength; // @synthesize maxNameLength=_maxNameLength;
@property(retain, nonatomic) ICHashtagsNode *hashtagsTree; // @synthesize hashtagsTree=_hashtagsTree;
@property(retain, nonatomic) NSMutableSet *hashtagsNames; // @synthesize hashtagsNames=_hashtagsNames;
@property(retain, nonatomic) NSMutableDictionary *hashtagSuggestionsDictionary; // @synthesize hashtagSuggestionsDictionary=_hashtagSuggestionsDictionary;
@property(nonatomic) __weak id <ICHashtagAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak ICTableColumnTextView *tableTextView; // @synthesize tableTextView=_tableTextView;
@property(nonatomic) struct _NSRange editedRange; // @synthesize editedRange=_editedRange;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
@property(nonatomic) __weak ICAttachmentInsertionController *attachmentInsertionController; // @synthesize attachmentInsertionController=_attachmentInsertionController;
@property(nonatomic) _Bool isUpdatingKeyboard; // @synthesize isUpdatingKeyboard=_isUpdatingKeyboard;
@property(nonatomic) __weak id <ICHashtagKeyboardDelegate> hashtagTableKeyboardDelegate; // @synthesize hashtagTableKeyboardDelegate=_hashtagTableKeyboardDelegate;
@property(nonatomic) __weak id <ICHashtagKeyboardDelegate> hashtagKeyboardDelegate; // @synthesize hashtagKeyboardDelegate=_hashtagKeyboardDelegate;
- (id)hashtagSuggestionsForKey:(id)arg1;	// IMP=0x000000000000da40
- (void)associateHashtagSuggestion:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000000d6c8
- (void)accountWasDeleted:(id)arg1;	// IMP=0x000000000000d6b6
- (void)crossAppHashtagDidChange:(id)arg1;	// IMP=0x000000000000d641
- (void)updateHashtagsAssociations;	// IMP=0x000000000000d277
- (id)checkForHashtagInString:(id)arg1 inRange:(struct _NSRange)arg2 selectionRange:(struct _NSRange)arg3 languageHasSpaces:(_Bool)arg4;	// IMP=0x000000000000c8f8
@property(readonly, nonatomic) unsigned long long maxLengthOfStringForCheckingHashtag;
- (void)updateNoteHashtags;	// IMP=0x000000000000c8d4
@property(readonly, nonatomic) _Bool allowsHashtag;
- (void)dealloc;	// IMP=0x000000000000c7fe
- (id)initWithNote:(id)arg1;	// IMP=0x000000000000c6e0

@end

