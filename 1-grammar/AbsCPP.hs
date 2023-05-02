-- File generated by the BNF Converter (bnfc 2.9.4.1).

{-# LANGUAGE GeneralizedNewtypeDeriving #-}

-- | The abstract syntax of language CPP.

module AbsCPP where

import Prelude (Char, Double, Integer, String)
import qualified Prelude as C (Eq, Ord, Show, Read)
import qualified Data.String

data Program = PDefs [Def]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Def
    = FunDefWithBody Type Id [Arg] [Stm]
    | FunDefWithoutBody Type Id [Arg]
    | InlineDefWithBody Type Id [Arg] [Stm]
    | InlineDefWithoutBody Type Id [Arg]
    | DStructDef Struct
    | DVarDef Variable
    | FTopTypedef Typedef
    | DUsingDef QConst
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Struct = DStructDecl Id [Variable]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Stm
    = SStructDef Struct
    | SVarStm Variable
    | STypedef Typedef
    | SExp Exp
    | SReturn Exp
    | SWhile Exp Stm
    | SDoWhile Stm Exp
    | SFor Variable Exp Exp Stm
    | SIf Exp Stm
    | SIfElse Exp Stm Stm
    | SBlock [Stm]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Variable = VIdList Type [IdList]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Typedef = DTypedef Type Id
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Arg = ATypeDecl Type | ADeclId Type IdList
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Exp
    = EInt Integer
    | EDouble Double
    | EChar Char
    | EString [String]
    | EQConstant QConst
    | ETrue
    | EFalse
    | EIndexing Exp Exp
    | EFunctionCall Exp [Exp]
    | EStructureProjection2 Exp Exp
    | EStructureProjection1 Exp Exp
    | EDecrementLeft Exp
    | EIncrementRightleft Exp
    | ENegation Exp
    | EDereference Exp
    | EDecrementRight Exp
    | EIncrementRight Exp
    | EUnaryMinus Exp
    | EUnaryPlus Exp
    | EReminder Exp Exp
    | EDivision Exp Exp
    | EMultiplication Exp Exp
    | ESubtraction Exp Exp
    | EAddition Exp Exp
    | ERightShift Exp Exp
    | ELeftShift Exp Exp
    | EEquivalent Exp Exp
    | ELessOrEqualThan Exp Exp
    | EGreaterOrEqualThan Exp Exp
    | EGreaterThan Exp Exp
    | ELessThan Exp Exp
    | EInequality Exp Exp
    | EEquality Exp Exp
    | EConjunction Exp Exp
    | EDisjunction Exp Exp
    | EAssignment1 Exp Exp
    | EAssignment2 Exp Exp
    | EAssignment3 Exp Exp
    | ECondition Exp Exp Exp
    | ECoReturn Exp
    | ECoYield Exp
    | ECoAwait Exp
    | ETyped Exp Type
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data TempInstant = TTempInstant Id [Type]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data QConst = QQConst [Name]
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Name = NameId Id | NameTempInstant TempInstant
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data Type
    = Type1 BType | Type2 AType | Type3 AType | TypeAType AType
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data AType = AType1 GType | ATypeGType GType
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data BType = BType1 GType | BTypeGType GType
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data GType
    = GType_int
    | GType_bool
    | GType_char
    | GType_double
    | GType_void
    | GTypeQConst QConst
  deriving (C.Eq, C.Ord, C.Show, C.Read)

data IdList = IdListId Id | IdList1 Id Exp
  deriving (C.Eq, C.Ord, C.Show, C.Read)

newtype Id = Id String
  deriving (C.Eq, C.Ord, C.Show, C.Read, Data.String.IsString)

