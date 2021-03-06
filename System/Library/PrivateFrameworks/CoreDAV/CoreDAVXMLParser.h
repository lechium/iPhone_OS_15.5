//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXMLParser.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSString, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;	// 48 = 0x30
    CoreDAVXMLElementGenerator *_rootErrorGenerator;	// 56 = 0x38
    NSSet *_parseHints;	// 64 = 0x40
    NSURL *_baseURL;	// 72 = 0x48
}

+ (_Bool)canHandleContentType:(id)arg1;	// IMP=0x0000000000070bfa
- (void).cxx_destruct;	// IMP=0x0000000000070d06
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSSet *parseHints; // @synthesize parseHints=_parseHints;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator; // @synthesize rootErrorGenerator=_rootErrorGenerator;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator; // @synthesize rootElementGenerator=_rootElementGenerator;
@property(readonly, nonatomic) CoreDAVErrorItem *rootError;
@property(readonly, nonatomic) CoreDAVItem *rootElement;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;	// IMP=0x0000000000070a63
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;	// IMP=0x0000000000070898
- (id)initWithData:(id)arg1;	// IMP=0x0000000000070840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *parserError; // @dynamic parserError;
@property(readonly) Class superclass;

@end

