//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENNoteRef, ENNotebook, NSDate, NSString;

@interface ENSessionFindNotesResult : NSObject
{
    _Bool _hasResources;	// 8 = 0x8
    int _updateSequenceNum;	// 12 = 0xc
    ENNoteRef *_noteRef;	// 16 = 0x10
    ENNotebook *_notebook;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSDate *_created;	// 40 = 0x28
    NSDate *_updated;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002ef658
@property(nonatomic) int updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(nonatomic) _Bool hasResources; // @synthesize hasResources=_hasResources;
@property(retain, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ENNotebook *notebook; // @synthesize notebook=_notebook;
@property(retain, nonatomic) ENNoteRef *noteRef; // @synthesize noteRef=_noteRef;
- (id)description;	// IMP=0x00000000002ef453

@end
