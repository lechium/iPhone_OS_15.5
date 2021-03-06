//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser, XRXMLElementParser;
@protocol XRIssueResponder, XRXMLParserDelegate;

@interface XRXMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;	// 8 = 0x8
    XRXMLElementParser *_workingElement;	// 16 = 0x10
    XRXMLElementParser *_topLevelElementParser;	// 24 = 0x18
    _Bool _delegateWantsFinishedCB;	// 32 = 0x20
    id <XRXMLParserDelegate> _delegate;	// 40 = 0x28
    id <XRIssueResponder> _issueResponder;	// 48 = 0x30
}

+ (_Bool)parseStream:(id)arg1 topLevelParser:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000000314f
+ (id)commonXMLSchemaRepositoryURL;	// IMP=0x00000000000030e9
- (void).cxx_destruct;	// IMP=0x0000000000003750
@property(retain, nonatomic) id <XRIssueResponder> issueResponder; // @synthesize issueResponder=_issueResponder;
@property(nonatomic) __weak id <XRXMLParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x0000000000003701
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x0000000000003601
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00000000000035e8
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x0000000000003496
- (void)finishedParsing;	// IMP=0x000000000000342d
- (_Bool)parseData:(id)arg1;	// IMP=0x00000000000033a0
- (id)initWithTopLevelParser:(id)arg1;	// IMP=0x0000000000003323
- (id)init;	// IMP=0x0000000000003315

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

