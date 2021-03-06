//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>
#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/ONOSearching-Protocol.h>

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter, NSString, ONOXMLElement;

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding>
{
    ONOXMLElement *_rootElement;	// 8 = 0x8
    struct _xmlDoc *_xmlDocument;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    unsigned long long _stringEncoding;	// 32 = 0x20
    NSNumberFormatter *_numberFormatter;	// 40 = 0x28
    NSDateFormatter *_dateFormatter;	// 48 = 0x30
    NSMutableDictionary *_defaultNamespaces;	// 56 = 0x38
}

+ (id)HTMLDocumentWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000296a77
+ (id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000296a0d
+ (id)XMLDocumentWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000296946
+ (id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002968dc
- (void).cxx_destruct;	// IMP=0x0000000000293c9e
@property(retain, nonatomic) NSMutableDictionary *defaultNamespaces; // @synthesize defaultNamespaces=_defaultNamespaces;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) struct _xmlDoc *xmlDocument; // @synthesize xmlDocument=_xmlDocument;
@property(retain, nonatomic) ONOXMLElement *rootElement; // @synthesize rootElement=_rootElement;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000293b33
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002939e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000293932
- (unsigned long long)hash;	// IMP=0x0000000000293920
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002938a5
- (id)description;	// IMP=0x0000000000293855
- (id)firstChildWithCSS:(id)arg1;	// IMP=0x00000000002936a7
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000293621
- (void)enumerateElementsWithCSS:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000029359b
- (id)CSS:(id)arg1;	// IMP=0x0000000000293518
- (id)firstChildWithXPath:(id)arg1;	// IMP=0x0000000000293495
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000029340f
- (void)enumerateElementsWithXPath:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000293333
- (id)functionResultByEvaluatingXPath:(id)arg1;	// IMP=0x00000000002932b0
- (id)XPath:(id)arg1;	// IMP=0x000000000029322d
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject *)arg1;	// IMP=0x00000000002931af
- (id)elementWithNode:(struct _xmlNode *)arg1;	// IMP=0x000000000029314f
- (void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2;	// IMP=0x000000000029305f
- (void)dealloc;	// IMP=0x0000000000292f01
- (id)initWithDocument:(struct _xmlDoc *)arg1;	// IMP=0x0000000000292e40

@end

