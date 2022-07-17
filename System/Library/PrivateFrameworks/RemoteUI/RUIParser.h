//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteUI/NSXMLParserDelegate-Protocol.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSString, NSURL, NSXMLParser, RUIActionSignal, RUIAlertView, RUIObjectModel;
@protocol RUIParserDelegate;

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_accumulator;	// 8 = 0x8
    NSDictionary *_currentElementAttributes;	// 16 = 0x10
    RUIAlertView *_currentAlert;	// 24 = 0x18
    NSXMLParser *_parser;	// 32 = 0x20
    RUIObjectModel *_uiObjectModel;	// 40 = 0x28
    NSMutableArray *_pages;	// 48 = 0x30
    NSMutableArray *_currentPageStack;	// 56 = 0x38
    RUIActionSignal *_actionSignal;	// 64 = 0x40
    NSURL *_baseURL;	// 72 = 0x48
    int _parserState;	// 80 = 0x50
    NSMutableArray *_elementStack;	// 88 = 0x58
    _Bool _foundXMLUI;	// 96 = 0x60
    _Bool _succeeded;	// 97 = 0x61
    NSData *_xmlData;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
    id <RUIParserDelegate> _delegate;	// 120 = 0x78
}

+ (id)rowWithAttributeDict:(id)arg1 delegate:(id)arg2 parent:(id)arg3;	// IMP=0x0000000000045ed1
+ (id)tableRowClassForElementName:(id)arg1;	// IMP=0x0000000000045453
+ (id)textStyleForString:(id)arg1;	// IMP=0x000000000004526c
+ (long long)textAlignmentForString:(id)arg1;	// IMP=0x0000000000045164
- (void).cxx_destruct;	// IMP=0x000000000004c042
@property(nonatomic) __weak id <RUIParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(retain, nonatomic) NSData *xmlData; // @synthesize xmlData=_xmlData;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;	// IMP=0x000000000004bf70
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x000000000004bf00
- (void)parser:(id)arg1 foundCDATA:(id)arg2;	// IMP=0x000000000004bd48
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x000000000004bd2f
- (void)_validateDocumentContent;	// IMP=0x000000000004bb4c
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000004a475
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x0000000000047ee0
- (_Bool)parseActionSignalWithElementName:(id)arg1;	// IMP=0x0000000000047e29
- (void)_finalizeElement:(id)arg1;	// IMP=0x0000000000047dac
- (void)_finalizeSection;	// IMP=0x000000000004728a
- (void)_finalizePinView;	// IMP=0x00000000000469e1
- (void)_logDeprecation:(id)arg1 value:(id)arg2;	// IMP=0x0000000000046846
- (void)_addSectionWithAttributes:(id)arg1;	// IMP=0x00000000000464de
- (void)_addNavigationBarWithAttributes:(id)arg1;	// IMP=0x0000000000046350
- (id)_lastRow;	// IMP=0x000000000004626e
- (id)_lastPageCreateIfNeeded;	// IMP=0x000000000004621f
- (id)_newRowWithAttributeDict:(id)arg1;	// IMP=0x00000000000460ed
- (id)_createAndAddPageWithAttributes:(id)arg1;	// IMP=0x0000000000045d1c
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000045b80
- (id)actionSignal;	// IMP=0x0000000000045b72
- (id)uiObjectModel;	// IMP=0x0000000000045b64
- (void)dealloc;	// IMP=0x0000000000045921
- (id)initWithXML:(id)arg1;	// IMP=0x000000000004590a
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000458f2
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 style:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000000454e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
