//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HLPHelpLocale, HLPHelpSectionItem, HLPURLImageCacheController, NSArray, NSMutableDictionary, NSString, NSURL;

@interface HLPHelpBookController
{
    _Bool _hasSectionIcon;	// 8 = 0x8
    _Bool _fullBookView;	// 9 = 0x9
    long long _contentFormatVersion;	// 16 = 0x10
    long long _serverType;	// 24 = 0x18
    NSArray *_additionalSupportedLanguages;	// 32 = 0x20
    NSMutableDictionary *_helpItemMap;	// 40 = 0x28
    NSString *_contentVersion;	// 48 = 0x30
    NSString *_copyrightText;	// 56 = 0x38
    NSString *_copyrightTopicIdentifier;	// 64 = 0x40
    NSString *_bookId;	// 72 = 0x48
    NSString *_topicPathFormat;	// 80 = 0x50
    NSString *_remoteSearchPath;	// 88 = 0x58
    NSString *_remoteCSSearchIndex;	// 96 = 0x60
    NSString *_iconBasePath;	// 104 = 0x68
    HLPHelpLocale *_locale;	// 112 = 0x70
    NSString *_welcomeTopicIdentifier;	// 120 = 0x78
    NSURL *_helpBookURL;	// 128 = 0x80
    HLPHelpSectionItem *_rootSectionItem;	// 136 = 0x88
    HLPURLImageCacheController *_imageCacheController;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000000a3cd
@property(retain, nonatomic) HLPURLImageCacheController *imageCacheController; // @synthesize imageCacheController=_imageCacheController;
@property(retain, nonatomic) HLPHelpSectionItem *rootSectionItem; // @synthesize rootSectionItem=_rootSectionItem;
@property(retain, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property(retain, nonatomic) NSString *welcomeTopicIdentifier; // @synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier;
@property(retain, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *iconBasePath; // @synthesize iconBasePath=_iconBasePath;
@property(retain, nonatomic) NSString *remoteCSSearchIndex; // @synthesize remoteCSSearchIndex=_remoteCSSearchIndex;
@property(retain, nonatomic) NSString *remoteSearchPath; // @synthesize remoteSearchPath=_remoteSearchPath;
@property(retain, nonatomic) NSString *topicPathFormat; // @synthesize topicPathFormat=_topicPathFormat;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(retain, nonatomic) NSString *copyrightTopicIdentifier; // @synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier;
@property(retain, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(retain, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(retain, nonatomic) NSMutableDictionary *helpItemMap; // @synthesize helpItemMap=_helpItemMap;
@property(copy, nonatomic) NSArray *additionalSupportedLanguages; // @synthesize additionalSupportedLanguages=_additionalSupportedLanguages;
@property(nonatomic) _Bool fullBookView; // @synthesize fullBookView=_fullBookView;
@property(nonatomic) _Bool hasSectionIcon; // @synthesize hasSectionIcon=_hasSectionIcon;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) long long contentFormatVersion; // @synthesize contentFormatVersion=_contentFormatVersion;
- (id)welcomeTopicItem;	// IMP=0x000000000000a104
- (id)copyrightTopicItem;	// IMP=0x000000000000a0e7
- (id)helpItemForID:(id)arg1;	// IMP=0x000000000000a028
- (void)addAsideTopic:(id)arg1;	// IMP=0x0000000000009f18
- (id)helpTopicItemForName:(id)arg1;	// IMP=0x0000000000009c72
- (id)helpTopicItemForID:(id)arg1;	// IMP=0x0000000000009c1b
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;	// IMP=0x0000000000009688
- (id)dynamicServerSectionsForIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 tocMap:(id)arg4;	// IMP=0x0000000000009071
- (id)systemLanguages;	// IMP=0x0000000000008fa8
- (void)processData:(id)arg1 formattedData:(id)arg2;	// IMP=0x0000000000007d2b
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007b1f
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007a64
@property(readonly, nonatomic, getter=isSemanticHTML) _Bool semanticHTML; // @dynamic semanticHTML;
- (void)dealloc;	// IMP=0x00000000000079d0

@end
