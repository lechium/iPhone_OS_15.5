//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugReportFormatter : NSObject
{
    unsigned long long _indentLevel;	// 8 = 0x8
    NSString *_indentString;	// 16 = 0x10
    unsigned long long _extraBodyIndentLevel;	// 24 = 0x18
}

+ (id)defaultFormatter;	// IMP=0x000000000069830b
- (void).cxx_destruct;	// IMP=0x0000000000698795
@property(nonatomic) unsigned long long extraBodyIndentLevel; // @synthesize extraBodyIndentLevel=_extraBodyIndentLevel;
@property(copy, nonatomic) NSString *indentString; // @synthesize indentString=_indentString;
@property(nonatomic) unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (id)stringFromReportComponents:(id)arg1;	// IMP=0x000000000069836e
- (id)init;	// IMP=0x000000000069831d

@end
