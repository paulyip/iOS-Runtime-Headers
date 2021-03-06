/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
    NSMutableDictionary *_policyData;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)_cleanUpPolicyData:(id)arg1;
- (void)_setPolicyData:(id)arg1;
- (void)dealloc;
- (id)perDomainDictsForPolicy;

@end
