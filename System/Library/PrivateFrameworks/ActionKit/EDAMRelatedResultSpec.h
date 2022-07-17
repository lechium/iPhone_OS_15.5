//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSet;

@interface EDAMRelatedResultSpec
{
    NSNumber *_maxNotes;	// 8 = 0x8
    NSNumber *_maxNotebooks;	// 16 = 0x10
    NSNumber *_maxTags;	// 24 = 0x18
    NSNumber *_writableNotebooksOnly;	// 32 = 0x20
    NSNumber *_includeContainingNotebooks;	// 40 = 0x28
    NSNumber *_includeDebugInfo;	// 48 = 0x30
    NSNumber *_maxExperts;	// 56 = 0x38
    NSNumber *_maxRelatedContent;	// 64 = 0x40
    NSSet *_relatedContentTypes;	// 72 = 0x48
}

+ (id)structFields;	// IMP=0x00000000001aa543
+ (id)structName;	// IMP=0x00000000001aa536
- (void).cxx_destruct;	// IMP=0x00000000001aa99b
@property(retain, nonatomic) NSSet *relatedContentTypes; // @synthesize relatedContentTypes=_relatedContentTypes;
@property(retain, nonatomic) NSNumber *maxRelatedContent; // @synthesize maxRelatedContent=_maxRelatedContent;
@property(retain, nonatomic) NSNumber *maxExperts; // @synthesize maxExperts=_maxExperts;
@property(retain, nonatomic) NSNumber *includeDebugInfo; // @synthesize includeDebugInfo=_includeDebugInfo;
@property(retain, nonatomic) NSNumber *includeContainingNotebooks; // @synthesize includeContainingNotebooks=_includeContainingNotebooks;
@property(retain, nonatomic) NSNumber *writableNotebooksOnly; // @synthesize writableNotebooksOnly=_writableNotebooksOnly;
@property(retain, nonatomic) NSNumber *maxTags; // @synthesize maxTags=_maxTags;
@property(retain, nonatomic) NSNumber *maxNotebooks; // @synthesize maxNotebooks=_maxNotebooks;
@property(retain, nonatomic) NSNumber *maxNotes; // @synthesize maxNotes=_maxNotes;

@end
