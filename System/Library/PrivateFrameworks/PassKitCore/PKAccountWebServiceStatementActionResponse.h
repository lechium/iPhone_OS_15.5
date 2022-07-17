//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse
{
    NSData *_statementPDFData;	// 8 = 0x8
    NSString *_statementDataFilename;	// 16 = 0x10
    NSString *_statementDataHash;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f8da2
@property(readonly, copy, nonatomic) NSString *statementDataHash; // @synthesize statementDataHash=_statementDataHash;
@property(readonly, copy, nonatomic) NSString *statementDataFilename; // @synthesize statementDataFilename=_statementDataFilename;
@property(readonly, copy, nonatomic) NSData *statementPDFData; // @synthesize statementPDFData=_statementPDFData;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001f8b1c

@end
